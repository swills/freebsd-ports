# $FreeBSD: head/net-mgmt/2ping/Makefile 456138 2017-12-12 13:33:20Z sunpoet $

PORTNAME=	2ping
PORTVERSION=	4.1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	https://www.finnie.org/software/2ping/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Bi-directional ping utility

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils noflavors
USES=		python:3.4+

.include <bsd.port.mk>
