# Created by: torstenb
# $FreeBSD: head/x11-wm/ctwm/Makefile 479407 2018-09-10 13:15:47Z mat $

PORTNAME=	ctwm
DISTVERSION=	4.0.2
PORTEPOCH=	1
CATEGORIES=	x11-wm
MASTER_SITES=	https://www.ctwm.org/dist/ \
		https://distfiles.over-yonder.net/ctwm/

MAINTAINER=	fullermd@over-yonder.net
COMMENT=	Extension to twm, with support for multiple virtual screens

LICENSE=	MIT

USES=		cmake:outsource jpeg tar:xz
USE_XORG=	x11 xext xt ice sm xpm xmu

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.mk>
