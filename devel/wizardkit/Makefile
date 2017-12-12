# $FreeBSD: head/devel/wizardkit/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	wizardkit
PORTVERSION=	0.1
PORTREVISION=	7
CATEGORIES=	devel gnustep
MASTER_SITES=	http://download.gna.org/pmanager/0.2/
DISTNAME=	WizardKit-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Framework needed by Project Manager

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:bzip2 gnustep
USE_GNUSTEP=	back build
USE_LDCONFIG=	${GNUSTEP_LOCAL_LIBRARIES}

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Library/Frameworks/WizardKit.framework/Versions/0/libWizardKit.so

.include <bsd.port.mk>
