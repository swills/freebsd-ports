# $FreeBSD: head/textproc/popup/Makefile 480741 2018-09-26 15:23:37Z brooks $

PORTNAME=	popup
PORTVERSION=	0.5
PORTREVISION=	9
CATEGORIES=	textproc gnustep
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Popup-${PORTVERSION}pre1
DISTNAME=	Popup-${PORTVERSION}pre1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Interactive learning aid for pairs of words

LICENSE=	GPLv2+

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Popup.app/Popup

.include <bsd.port.mk>
