# Created by: James Bailie <jimmy@mammothcheese.ca>
# $FreeBSD: head/net/wackford-squeers/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	wackford-squeers
PORTVERSION=	1.19
CATEGORIES=	net
MASTER_SITES=	http://www.mammothcheese.ca/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plain text network hypertext server and client

RUN_DEPENDS=	${LOCALBASE}/bin/munger:lang/munger

MAKE_ENV=	INSTALL_PROGRAM="${INSTALL_PROGRAM}" INSTALL_SCRIPT="${INSTALL_SCRIPT}" \
		INSTALL_DATA="${INSTALL_DATA}" INSTALL_MAN="${INSTALL_MAN}"

.include <bsd.port.mk>
