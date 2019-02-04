# $FreeBSD: head/net/py-paho-mqtt/Makefile 492020 2019-02-02 22:08:26Z yuri $

PORTNAME=	paho-mqtt
PORTVERSION=	1.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	joe@thrallingpenguin.com
COMMENT=	MQTT version 3.1/3.1.1 client class

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/epl-v10

USES=		python shebangfix
USE_PYTHON=	distutils autoplist
SHEBANG_FILES=	examples/*.py

.include <bsd.port.mk>
