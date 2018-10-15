# Created by: vanilla
# $FreeBSD: head/databases/p5-DBIx-XML_RDB/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DBIx-XML_RDB
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for creating XML from existing DBI datasources

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI \
		p5-XML-Parser>=0:textproc/p5-XML-Parser

USES=		perl5 shebangfix
SHEBANG_FILES=	sql2xml.pl xml2sql.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
