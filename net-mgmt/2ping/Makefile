# $FreeBSD: head/net-mgmt/2ping/Makefile 486690 2018-12-05 18:46:44Z sunpoet $

PORTNAME=	2ping
PORTVERSION=	4.3
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	https://www.finnie.org/software/2ping/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Bi-directional ping utility

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python:3.4+
USE_PYTHON=	autoplist distutils noflavors

NO_ARCH=	yes

.include <bsd.port.mk>
