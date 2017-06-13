# Created by: Oleg Mamontov <oleg@mamontov.net>
# $FreeBSD: head/textproc/p5-XML-FeedPP/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-FeedPP
PORTVERSION=	0.43
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@mamontov.net
COMMENT=	Get an RSS file and parse it

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-TreePP>=0.39:textproc/p5-XML-TreePP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
