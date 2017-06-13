# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/py-responses/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	responses
PORTVERSION=	0.5.0
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	brendan+freebsd@bbqsrc.net
COMMENT=	Utility library for mocking out the requests Python library

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>2.0.0:www/py-requests \
		${PYTHON_PKGNAMEPREFIX}cookies>0:www/py-cookies

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
