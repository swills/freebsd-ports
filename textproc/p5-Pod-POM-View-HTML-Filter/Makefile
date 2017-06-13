# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Pod-POM-View-HTML-Filter/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Pod-POM-View-HTML-Filter
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use filters on sections of your pod documents

BUILD_DEPENDS=	p5-Pod-POM>=0:textproc/p5-Pod-POM \
		p5-Syntax-Highlight-Shell>=0:www/p5-Syntax-Highlight-Shell \
		perltidy:devel/p5-Perl-Tidy \
		p5-Syntax-Highlight-HTML>=0:www/p5-Syntax-Highlight-HTML
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
