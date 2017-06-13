# $FreeBSD: head/devel/rubygem-svn2git/Makefile 424983 2016-10-31 08:14:01Z matthew $

PORTNAME=	svn2git
PORTVERSION=	2.4.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Ruby utilities for exporting SVN repo to git

LICENSE=	MIT

RUN_DEPENDS=	git-subversion>0:devel/git-subversion

CONFLICTS_INSTALL=	svn2git-[0-9]*

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem
PLIST_FILES=	bin/svn2git

.include <bsd.port.mk>
