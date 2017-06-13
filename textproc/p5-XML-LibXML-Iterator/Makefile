# Created by: Oliver Eikemeier <eikemeier@fillmore-labs.com>
# $FreeBSD: head/textproc/p5-XML-LibXML-Iterator/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-LibXML-Iterator
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML::LibXML::Iterator is an iterator for XML::LibXML parsed documents

BUILD_DEPENDS=	p5-XML-LibXML>=0:textproc/p5-XML-LibXML \
		p5-XML-NodeFilter>=0:textproc/p5-XML-NodeFilter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
