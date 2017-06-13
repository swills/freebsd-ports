# Created by: ijliao
# $FreeBSD: head/textproc/p5-XML-OPML/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-OPML
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Creates and updates OPML (Outline Processor Markup Language) files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser \
		p5-XML-SimpleObject>=0:textproc/p5-XML-SimpleObject
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
