# Created by: Frank Altpeter <frank@altpeter.de>
# $FreeBSD$

PORTNAME=	centerim
PORTVERSION=	5.0.1
CATEGORIES=	net-im
MASTER_SITES=	http://www.centerim.org/download/cim5/ \
		ftp://ftp.centerim.org/download/cim5/
DISTNAME=	${PORTNAME}5-${PORTVERSION}

MAINTAINER=	frank@altpeter.de
COMMENT=	Text mode menu- and window-driven IM interface

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgpg-error.so:security/libgpg-error \
		libpurple.so:net-im/libpurple \
		libsigc-2.0.so:devel/libsigc++20

USES=		iconv gmake ncurses:port pkgconfig python libtool 

USE_GNOME=	glib20
GNU_CONFIGURE=	yes
CONFLICTS=	centericq-[0-9]* centerim-devel-[0-9]*
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS GPGME DOCS

OPTIONS_DEFAULT=	GPGME 

OPTIONS_SUB=	yes

PORTDOCS=	README

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls
GPGME_LIB_DEPENDS=	libgpgme.so:security/gpgme
GPGME_CONFIGURE_OFF=	--with-gpgme-prefix=/nonexistent

post-patch:
	@${REINPLACE_CMD} -e 's|-R$$found_dir|-Wl,-rpath,$$found_dir|' \
		${WRKSRC}/configure

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
