# $FreeBSD: head/x11/gskrab/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	gskrab
PORTVERSION=	0.0.1
PORTREVISION=	9
CATEGORIES=	x11 gnustep
MASTER_SITES=	http://organact.mine.nu/~wolfgang/gskrab/
DISTNAME=	GSKrab-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNUstep Keyboard Grabber

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnustep
USE_GNUSTEP=	back build
USE_LDCONFIG=	${GNUSTEP_LOCAL_LIBRARIES}

ADDITIONAL_LIB_DIRS+=	-L${WRKSRC}/GSKrabFramework/GSKrab.framework/Versions/Current

post-patch:
	@${REINPLACE_CMD} -e "/GNUSTEP_INSTALLATION_DIR/d" ${WRKSRC}/GNUmakefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Tools/gsks \
		${STAGEDIR}${PREFIX}/GNUstep/System/Library/Frameworks/GSKrab.framework/Versions/0/libGSKrab.so

.include <bsd.port.mk>
