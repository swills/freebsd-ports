# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/textproc/p5-Lingua-EN-Summarize/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Lingua-EN-Summarize
PORTVERSION=	0.2
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple tool for summarizing bodies of English text

BUILD_DEPENDS=	p5-HTML-Summary>=0:www/p5-HTML-Summary \
		p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
