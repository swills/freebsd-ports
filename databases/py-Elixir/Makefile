# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/databases/py-Elixir/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Elixir
PORTVERSION=	0.7.1
PORTREVISION=	3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Declarative Mapper for SQLAlchemy

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=0.4.0:databases/py-sqlalchemy10@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
