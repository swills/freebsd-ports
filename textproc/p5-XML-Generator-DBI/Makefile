# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: head/textproc/p5-XML-Generator-DBI/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-Generator-DBI
PORTVERSION=	1.00
PORTREVISION=	2
CATEGORIES=	textproc databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate SAX events from SQL queries

BUILD_DEPENDS=	p5-XML-SAX>=0:textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
