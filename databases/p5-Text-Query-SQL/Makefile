# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/databases/p5-Text-Query-SQL/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Text-Query-SQL
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text-Query-SQL provides query builders for SQL databases

BUILD_DEPENDS=	p5-Text-Query>=0:textproc/p5-Text-Query
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBI>=0:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure patch

pre-patch:
	@${PERL} -pi -e '/DBI/ and $$_=""' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
