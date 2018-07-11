# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Event-NameDay/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	DateTime-Event-NameDay
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl DateTime extension to work with namedays from various countries

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-Set>=0:devel/p5-DateTime-Set \
		p5-DateTime-Calendar-Christian>=0:devel/p5-DateTime-Calendar-Christian \
		p5-Params-Validate>=0:devel/p5-Params-Validate

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
