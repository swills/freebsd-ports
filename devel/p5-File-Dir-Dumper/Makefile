# Created by: Anatoliy Dmytriyev <tolid@tolid.eu.org>
# $FreeBSD: head/devel/p5-File-Dir-Dumper/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	File-Dir-Dumper
PORTVERSION=	0.0.8
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	tolid@tolid.eu.org
COMMENT=	Perl5 module to dump directory structures meta-data

BUILD_DEPENDS=	p5-File-Find-Object>0:devel/p5-File-Find-Object \
		p5-IO-String>0:devel/p5-IO-String \
		p5-JSON>0:converters/p5-JSON \
		p5-Class-Accessor>0:devel/p5-Class-Accessor \
		p5-Devel-CheckOS>0:devel/p5-Devel-CheckOS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
