# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/p5-XML-DOM2/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-DOM2
PORTVERSION=	0.06
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DOM controlled, strict XML module for extentable xml objects

BUILD_DEPENDS=	p5-XML-SAX>=0:textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
