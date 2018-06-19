# Created by: Oleg Mamontov <oleg@mamontov.net>
# $FreeBSD: head/textproc/p5-XML-FeedPP/Makefile 470788 2018-05-24 16:02:26Z krion $

PORTNAME=	XML-FeedPP
PORTVERSION=	0.95
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@mamontov.net
COMMENT=	Parse/write/merge/edit RSS/RDF/Atom syndication feeds

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-TreePP>=0.39:textproc/p5-XML-TreePP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
