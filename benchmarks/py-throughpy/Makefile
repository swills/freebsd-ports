# $FreeBSD: head/benchmarks/py-throughpy/Makefile 460126 2018-01-27 14:30:59Z dbaio $

PORTNAME=	throughpy
PORTVERSION=	0.1
CATEGORIES=	benchmarks python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	contato@kanazuchi.com
COMMENT=	Python script to test throughput with iperf3

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	iperf3>=0:benchmarks/iperf3

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
