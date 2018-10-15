# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/net/py-pyshark/Makefile 481127 2018-10-02 19:06:16Z feld $

PORTNAME=	pyshark
PORTVERSION=	0.3.6.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pyhon packet parsing using wireshark dissectors

LICENSE=	MIT

RUN_DEPENDS=	tshark>0:net/tshark \
		${PYTHON_PKGNAMEPREFIX}trollius>0:devel/py-trollius@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}logbook>0:devel/py-logbook@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}py>0:devel/py-py@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>0:devel/py-lxml@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
