# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-riak_pb/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	riak_pb
PORTVERSION=	2.0.0.16
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Riak Protocol Buffers Messages

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}protobuf>=2.4.1:devel/py-protobuf@${FLAVOR}

USES=		python:-2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
