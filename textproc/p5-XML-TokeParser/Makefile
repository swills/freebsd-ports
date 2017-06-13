# Created by: Mike Bristow <mike@urgle.com>
# $FreeBSD: head/textproc/p5-XML-TokeParser/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-TokeParser
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	mike@urgle.com
COMMENT=	Simplified interface to XML::Parser

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
