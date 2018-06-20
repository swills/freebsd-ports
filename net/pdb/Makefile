# Created by: gnn
# $FreeBSD: head/net/pdb/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pdb
PORTVERSION=	0.1
CATEGORIES=	net
MASTER_SITES=	SF/pktdbg/pktdbg/${PORTVERSION}%20Beta
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Packet Debugger

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pcs/__init__.py:net/py-pcs@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils pythonprefix

.include <bsd.port.mk>
