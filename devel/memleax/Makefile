# $FreeBSD$

PORTNAME=	memleax
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.1
CATEGORIES=	devel

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Debug memory leaks of running processes

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64

LIB_DEPENDS=	libunwind.so:devel/libunwind
BUILD_DEPENDS=	${LOCALBASE}/lib/libdwarf.a:devel/libdwarf

USES=		gmake
USE_GITHUB=	yes
GH_ACCOUNT=	WuBingzheng

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
ALL_TARGET=	memleax
LLD_UNSAFE=	yes # cf. devel/libunwind

PLIST_FILES=	bin/memleax \
		man/man1/memleax.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/memleax ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/memleax.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
