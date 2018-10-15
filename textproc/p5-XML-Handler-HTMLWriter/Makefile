# Created by: clsung@dragon2.net
# $FreeBSD: head/textproc/p5-XML-Handler-HTMLWriter/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	XML-Handler-HTMLWriter
PORTVERSION=	2.01
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX handlers for outputting HTML

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-SAX-Writer>=0:textproc/p5-XML-SAX-Writer \
		p5-HTML-Parser>=0:www/p5-HTML-Parser

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
