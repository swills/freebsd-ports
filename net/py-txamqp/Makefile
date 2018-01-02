# Created by: Bruce Simpson
# $FreeBSD: head/net/py-txamqp/Makefile 457399 2017-12-27 19:52:20Z sunpoet $

PORTNAME=	txamqp
PORTVERSION=	0.8.1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	txAMQP-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Twisted Python library for the AMQP messaging protocol

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

xRUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
