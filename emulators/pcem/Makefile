# $FreeBSD$

PORTNAME=	pcem
DISTVERSION=	15
CATEGORIES=	emulators
MASTER_SITES=	https://bitbucket.org/pcem_emulator/pcem/get/
DISTNAME=	91640c017559

MAINTAINER=	darkfm@vera.com.uy
COMMENT=	PC/PC-Compatible low-level emulator striving for accuracy

LICENSE=	GPLv2

USES=		autoreconf compiler gl gmake openal pkgconfig sdl zip
USE_GL=		gl
USE_SDL=	sdl2
USE_WX=		3.0

WRKSRC=		${WRKDIR}/pcem_emulator-pcem-${DISTNAME}
PATCHDIR=files
PLIST_FILES=	bin/pcem
CONFIGURE_ARGS=	--enable-release-build --with-wx-config=wxgtk3u-3.0-config
GNU_CONFIGURE=	yes
ONLY_FOR_ARCHS=	amd64

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1300000
LDFLAGS+=	-fuse-ld=bfd
.endif

.include <bsd.port.mk>
