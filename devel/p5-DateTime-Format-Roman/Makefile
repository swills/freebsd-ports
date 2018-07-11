# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-Roman/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	DateTime-Format-Roman
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Roman day numbering for DateTime objects

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-Roman>=0:math/p5-Roman

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
