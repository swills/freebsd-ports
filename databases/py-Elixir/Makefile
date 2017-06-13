# Created by: Nicola Vitale <nivit@FreeBSD.org>
# $FreeBSD: head/databases/py-Elixir/Makefile 428151 2016-12-08 19:33:15Z rene $

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

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=0.4.0:databases/py-sqlalchemy10

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
