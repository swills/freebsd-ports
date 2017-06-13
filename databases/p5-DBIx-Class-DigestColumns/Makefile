# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/databases/p5-DBIx-Class-DigestColumns/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Class-DigestColumns
PORTVERSION=	0.06000
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatic digest columns

RUN_DEPENDS=	p5-DBIx-Class>=0.06002:databases/p5-DBIx-Class
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild extract

post-extract:
	@${PERL} -i.bak -ne 'print unless /^\s*build_requires/ .. /},$$/ or /^\s*recommends/ .. /},$$/ ' ${WRKSRC}/Build.PL

.include <bsd.port.mk>
