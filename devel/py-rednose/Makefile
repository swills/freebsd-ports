# $FreeBSD: head/devel/py-rednose/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rednose
PORTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Coloured output for nosetests

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}colorama>0:devel/py-colorama@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}termstyle>0:devel/py-termstyle@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
