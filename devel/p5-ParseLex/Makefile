# Created by: Jim Pirzyk <pirzyk@uiuc.edu>
# $FreeBSD: head/devel/p5-ParseLex/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	ParseLex
PORTVERSION=	2.21
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN/Parse
PKGNAMEPREFIX=	p5-

MAINTAINER=	pirzyk@FreeBSD.org
COMMENT=	Object-oriented generator of lexical analyzers

BUILD_DEPENDS=	p5-ParseTemplate>=3.01:devel/p5-ParseTemplate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
