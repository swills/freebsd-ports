# Created by: rs.os
# $FreeBSD: head/devel/py3-click-threading/Makefile 440962 2017-05-15 18:33:48Z sunpoet $

MASTERDIR=	${.CURDIR}/../py-click-threading

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py3-click
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py3-pytest \
		${RUN_DEPENDS}

USES=		python:3.3+

.include "${MASTERDIR}/Makefile"
