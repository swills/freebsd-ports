# Created by: ljo
# $FreeBSD: head/print/afm/Makefile 424411 2016-10-21 12:51:40Z mat $

PORTNAME=	afm
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	ftp://ftp.sgi.com/sgi/fax/source/
DISTNAME=	afm
EXTRACT_SUFX=	-tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adobe Font Metrics

NO_BUILD=	yes
pre-patch:
	@${RM} -r ${WRKSRC}/RCS

.include <bsd.port.mk>
