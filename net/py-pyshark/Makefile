# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/net/py-pyshark/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyshark
PORTVERSION=	0.3.6.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Pyhon packet parsing using wireshark dissectors

LICENSE=	MIT

RUN_DEPENDS=	tshark>0:net/tshark \
		${PYTHON_PKGNAMEPREFIX}trollius>0:devel/py-trollius@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}logbook>0:devel/py-logbook@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}py>0:devel/py-py@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>0:devel/py-lxml@${FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
