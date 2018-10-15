# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/redmine-default_assign/Makefile 481128 2018-10-02 19:18:10Z feld $

PORTNAME=	default_assign
PORTVERSION=	0.6
CATEGORIES=	www
PKGNAMEPREFIX=	redmine-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Assign Redmine tickets by default

LICENSE=	GPLv2+

NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	giddie
GH_PROJECT=	redmine_default_assign

REDMINE_PLUGIN_NAME=	redmine_${PORTNAME}

.include "${.CURDIR}/../../www/redmine/bsd.redmine.mk"
