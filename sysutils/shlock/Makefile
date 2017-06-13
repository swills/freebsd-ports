# $FreeBSD: head/sysutils/shlock/Makefile 428654 2016-12-16 08:36:10Z jhale $

PORTNAME=	shlock
PORTVERSION=	2.6.1
CATEGORIES=	sysutils
MASTER_SITES=	ISC/inn
DISTNAME=	inn-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create lock files for use in shell scripts

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_PERL="${TRUE}"
CONFIGURE_ARGS=	--disable-shared
ALL_TARGET=	all-lib

PLIST_FILES=	bin/shlock man/man1/shlock.1.gz

post-build:
	@(cd ${WRKSRC}/backends && ${DO_MAKE_BUILD} shlock)

do-install:
	(cd ${WRKSRC}/backends && ${WRKSRC}/libtool --mode=install \
		${INSTALL_PROGRAM} shlock ${STAGEDIR}${PREFIX}/bin)
	(cd ${WRKSRC}/doc/man && ${INSTALL_MAN} shlock.1 \
		${STAGEDIR}${MANPREFIX}/man/man1)

.include <bsd.port.mk>
