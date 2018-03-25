# Created by: Danilo G. Baio <dbaio@FreeBSD.org>
# $FreeBSD: head/net/py-httpstat/Makefile 464820 2018-03-17 14:13:17Z dbaio $

PORTNAME=	httpstat
PORTVERSION=	1.2.1
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Curl statistics made simple

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	curl:ftp/curl

USES=		python:2.7

USE_GITHUB=	yes
GH_ACCOUNT=	reorx

USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
