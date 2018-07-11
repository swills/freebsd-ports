# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: head/textproc/p5-XML-FOAF/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	XML-FOAF
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BTROTT
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Parse FOAF (Friend of a Friend) data

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Filter>=0:devel/p5-Filter \
		p5-RDF-Core>=0:textproc/p5-RDF-Core \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
