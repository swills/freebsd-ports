# Created by: rea@FreeBSD.org
# $FreeBSD$

PORTNAME=	mu
PORTVERSION=	1.2
CATEGORIES=	mail

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Mail searching frontend for Xapian

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxapian.so:databases/xapian-core \
		libgmime-3.0.so:mail/gmime30 \
		libjson-glib-1.0.so:devel/json-glib

USES=		autoreconf compiler:c++14-lang gettext-runtime gmake gnome \
		libtool makeinfo pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	djcb
USE_GNOME=	glib20

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-gtk --disable-mu4e
INSTALL_TARGET=	install-strip
TEST_TARGET=	test

OPTIONS_DEFINE=		DOCS GUILE
OPTIONS_SUB=		yes

GUILE_LIB_DEPENDS=	libguile-2.2.so:lang/guile2
GUILE_USE=		ldconfig=yes
GUILE_CONFIGURE_ENABLE=	guile
GUILE_INFO=		mu-guile
GUILE_USE_LDCONFIG=	yes

# These patch tests.  Reported upstream:
# https://github.com/djcb/mu/pull/1512
# https://github.com/djcb/mu/pull/1511
# https://github.com/djcb/mu/pull/1510
pre-patch:
	@${REINPLACE_CMD} -e 's/:alpha:]]/:alnum:]][[:alnum:]-]/' \
		${WRKSRC}/lib/tests/test-mu-maildir.c

	@${REINPLACE_CMD} -e '/LC_ALL/s/\.utf8/.UTF-8/' \
		${WRKSRC}/lib/tests/test-mu-common.c

	@${REINPLACE_CMD} -e '/nonexistent/s/\%s/find \%s/' \
			  -e '/f:socrates/s/find//' \
		${WRKSRC}/mu/tests/test-mu-cmd.c

post-install:
	cd ${FILESDIR} && ${INSTALL_SCRIPT} mu-ask \
	    ${STAGEDIR}${PREFIX}/bin

post-install-GUILE-on:
	${FIND} ${STAGEDIR}${PREFIX}/lib -name "*.so.*" -type f | \
	    ${XARGS} ${STRIP_CMD}

.include <bsd.port.mk>
