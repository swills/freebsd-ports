# $FreeBSD: head/databases/py-pum/Makefile 464989 2018-03-19 06:51:48Z yuri $

PORTNAME=	pum
DISTVERSION=	0.5.11
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Postgres upgrade manager

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psycopg2>=2.7.3:databases/py-psycopg2@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${FLAVOR}

USES=		python:3.4+
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
