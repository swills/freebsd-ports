# Created by: René Ladan <rene@freebsd.org>
# $FreeBSD: head/databases/py-django-transaction-hooks/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	django-transaction-hooks
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Django database backends to register transaction-commit hooks

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=1.6.1:www/py-django18

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
