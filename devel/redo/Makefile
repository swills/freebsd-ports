# $FreeBSD: head/devel/redo/Makefile 490581 2019-01-17 17:48:19Z tobik $

PORTNAME=	redo
PORTVERSION=	1.4
CATEGORIES=	devel
MASTER_SITES=	https://jdebp.eu/Repository/freebsd/

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Incremental build system

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/source/COPYING

NO_WRKSUBDIR=	yes

OPTIONS_DEFINE=	MANPAGES
OPTIONS_DEFAULT=	MANPAGES
OPTIONS_SUB=	yes

MANPAGES_USES=	perl5
MANPAGES_USE=	PERL5=build
MANPAGES_BINARY_ALIAS_OFF=	pod2man=true

do-configure:
	cd ${WRKSRC} && ./package/prepare
	${ECHO_CMD} "${CXX}" > ${WRKSRC}/build/cxx
	${ECHO_CMD} "${CPPFLAGS}" > ${WRKSRC}/build/cppflags
	${ECHO_CMD} "${CXXFLAGS}" > ${WRKSRC}/build/cxxflags
	${ECHO_CMD} "${LDFLAGS}" > ${WRKSRC}/build/ldflags

do-build:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ./package/make

do-install:
	cd ${WRKSRC} && ./package/makeinstall
	cd ${WRKSRC} && ./package/export "${STAGEDIR}${PREFIX}/"

.include <bsd.port.mk>
