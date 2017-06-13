# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/textproc/p5-HTML-TagFilter/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	HTML-TagFilter
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fine-grained html-filter, xss-blocker and mailto-obfuscator

BUILD_DEPENDS=	p5-URI>=0:net/p5-URI \
		p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
