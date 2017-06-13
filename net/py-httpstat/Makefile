# Created by: Danilo G. Baio <dbaio@FreeBSD.org>
# $FreeBSD: head/net/py-httpstat/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	httpstat
PORTVERSION=	1.2.1
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Curl statistics made simple

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	curl:ftp/curl

USE_GITHUB=	yes
GH_ACCOUNT=	reorx

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
