# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-XML-Valid/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-XML-Valid
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate XML and XHTML

RUN_DEPENDS=	p5-XML-LibXML>0:textproc/p5-XML-LibXML \
		p5-Test-Simple>0:devel/p5-Test-Simple
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
