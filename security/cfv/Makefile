# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/security/cfv/Makefile 432850 2017-01-30 14:55:08Z rezny $

PORTNAME=	cfv
PORTVERSION=	1.18.3
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	rezny@FreeBSD.org
COMMENT=	Utility to both test and create .sfv, .csv, and md5sum files

USES=		python:2
ALL_TARGET=	cfv.wrapper
INSTALL_TARGET=	install-wrapper
MAKE_ARGS=	PYTHON=${PYTHON_CMD}

post-patch:
	@${REINPLACE_CMD} -e "s,%%SITELIBDIR%%,${PYTHON_SITELIBDIR},g" \
	        -e "s,%%PREFIX%%,${PREFIX},g" ${WRKSRC}/Makefile

.include <bsd.port.mk>
