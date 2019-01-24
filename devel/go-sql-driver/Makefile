# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/go-sql-driver/Makefile 490382 2019-01-15 14:50:27Z swills $

PORTNAME=	go-sql-driver
PORTVERSION=	1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
MASTER_SITES=	GH \
		http://mirrors.rit.edu/zi/

MAINTAINER=	lattera@gmail.com
COMMENT=	Lightweight and fast MySQL driver for go

USES=		go
USE_GITHUB=	yes
GH_PROJECT=	mysql

GO_PKGNAME=	github.com/${PORTNAME}/${GH_PROJECT}

DEPRECATED=		Go source should not be packaged
EXPIRATION_DATE=	2019-02-15

.include <bsd.port.mk>
