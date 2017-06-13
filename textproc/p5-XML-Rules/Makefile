# $FreeBSD: head/textproc/p5-XML-Rules/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	XML-Rules
PORTVERSION=	1.16
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse XML and specify rules for individual tags

RUN_DEPENDS=	p5-XML-Parser>=2.00:textproc/p5-XML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
