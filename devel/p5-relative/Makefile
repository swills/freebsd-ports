# Created by: skreuzer@exit2shell.com
# $FreeBSD: head/devel/p5-relative/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	relative
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SAPER
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Load modules with relative names

RUN_DEPENDS=	p5-UNIVERSAL-require>=0.11:devel/p5-UNIVERSAL-require

BUILD_DEPEND=	${RUN_DEPENDS} \
				p5-Test-Simple>=0.74:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
